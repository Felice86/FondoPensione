//
//  UserLogin.m
//  fondogommaplastica
//
//  Created by Felice Vimercati on 24/11/15.
//  Copyright © 2015 ElpoEdizioni. All rights reserved.
//

#import "UserLogin.h"
#import "NSString+MD5.h"

@implementation UserLogin
@synthesize codiceUtente;
@synthesize passwordUtente;
@synthesize passwordUtenteMD5;

- (void)setPasswordUtente:(NSString *)_passwordUtente {
    passwordUtente = _passwordUtente;
    self.passwordUtenteMD5 = [_passwordUtente MD5];
}

@end
