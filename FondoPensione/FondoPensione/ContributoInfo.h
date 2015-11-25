//
//  Contributo.h
//  Previmoda
//
//  Created by Daniele on 29/12/14.
//  Copyright (c) 2014 Previmoda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContributoInfo : NSObject
@property (nonatomic, assign) NSInteger anno;
@property (nonatomic, retain) NSNumber *contributoAderente;
@property (nonatomic, retain) NSNumber *contributoAssicurativo;
@property (nonatomic, retain) NSNumber *contributoAzienda;
@property (nonatomic, retain) NSNumber *contributoIscrizione;
@property (nonatomic, retain) NSNumber *contributoRivalutazioneTFR;
@property (nonatomic, retain) NSNumber *contributoTfr;
@property (nonatomic, retain) NSNumber *contributoTfrSilente;
@property (nonatomic, retain) NSNumber *contributoVolontario;
@property (nonatomic, retain) NSNumber *contributoVolontarioAzienda;
@property (nonatomic, retain) NSString *nomeAzienda;
@property (nonatomic, assign) NSInteger periodo;
@property (nonatomic, retain) NSString *statoContributo;
@end
