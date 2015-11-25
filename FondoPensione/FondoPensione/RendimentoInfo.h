//
//  RendimentoInfo.h
//  fondogommaplastica
//
//  Created by Felice Vimercati on 24/11/15.
//  Copyright © 2015 ElpoEdizioni. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RendimentoDettaglio.h"

@interface RendimentoInfo : NSObject
@property (nonatomic, retain) NSString* nomeCompartoAttuale;
@property (nonatomic, retain) RendimentoDettaglio* rendimentoDettaglio;
@property (nonatomic, retain) NSNumber* controvaloreTotale;
@property (nonatomic, retain) NSNumber* rendimentoAnnuo;

@end
