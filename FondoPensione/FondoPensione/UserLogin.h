//
//  UserLogin.h
//  fondogommaplastica
//
//  Created by Felice Vimercati on 24/11/15.
//  Copyright © 2015 ElpoEdizioni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserLogin : NSObject
@property (nonatomic, retain) NSString *codiceUtente;
@property (nonatomic, retain) NSString *passwordUtente;
@property (nonatomic, retain) NSString *passwordUtenteMD5;
@end
