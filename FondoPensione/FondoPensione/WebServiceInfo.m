//
//  WebServiceInfo.m
//  fondogommaplastica
//
//  Created by Felice Vimercati on 24/11/15.
//  Copyright © 2015 ElpoEdizioni. All rights reserved.
//

#import "WebServiceInfo.h"

@implementation WebServiceInfo
@synthesize userLogin;

+ (id)sharedInstance {
    // structure used to test whether the block has completed or not
    static dispatch_once_t p = 0;
    
    // initialize sharedObject as nil (first call only)
    __strong static id _sharedObject = nil;
    
    // executes a block object once and only once for the lifetime of an application
    dispatch_once(&p, ^{
        _sharedObject = [[self alloc] init];
    });
    
    // returns the same object each time
    return _sharedObject;
}

- (id) init {
    self = [super init];
    if (self) {
        self.userLogin = [[UserLogin alloc] init];
    }
    return self;
}

- (void)inserisciCredenzialiDiAutenticazione:(NSMutableURLRequest*)urlRequest {
    NSString *credentials = [NSString stringWithFormat:@"%@:%@",credential_user,credential_pass];
    NSString *encodedCredential = [[credentials dataUsingEncoding:NSUTF8StringEncoding] base64EncodedStringWithOptions:0];
    [urlRequest addValue:[NSString stringWithFormat:@"Basic %@",encodedCredential] forHTTPHeaderField:@"Authorization"];
}

#pragma mark NSURLConnectionDelegate & NSURLConnectionDataDelegate

- (void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data {
    //Una risposta valida contiene un JSON
    NSError *errorJSON;
    NSDictionary *resultDict = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:&errorJSON];
    
}

- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error {
    
}

@end
