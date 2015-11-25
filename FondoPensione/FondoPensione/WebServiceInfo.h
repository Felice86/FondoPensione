//
//  WebServiceInfo.h
//  fondogommaplastica
//
//  Created by Felice Vimercati on 24/11/15.
//  Copyright © 2015 ElpoEdizioni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserLogin.h"

#define nomeFondo @"Previmoda"
#define wsFile @"ws_accenture"
#define kMethod @"method"
#define kUrl @"url"
#define kContentType @"content-type"

#define credential_user @"prvmobile01"
#define credential_pass @"295888JJOK"

@interface WebServiceInfo : NSObject <NSURLConnectionDelegate,NSURLConnectionDataDelegate>
@property (nonatomic, retain) UserLogin *userLogin;
+ (id)sharedInstance;
@end
