//
//  RecapitiInfo.h
//  fondogommaplastica
//
//  Created by Felice Vimercati on 24/11/15.
//  Copyright © 2015 ElpoEdizioni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RecapitiInfo : NSObject
@property (nonatomic, retain) NSString *telefono;
@property (nonatomic, retain) NSString *fax;
@property (nonatomic, retain) NSString *cellulare;
@property (nonatomic, retain) NSString *eMail;
@property (nonatomic, assign) BOOL esisteConsensoEcViaMail;
@property (nonatomic, retain) NSString *jsonRecapiti;
@end
