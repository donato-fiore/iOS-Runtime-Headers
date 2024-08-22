// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICLLPLAYBACKCONTROLSETTINGS_H
#define _ICLLPLAYBACKCONTROLSETTINGS_H

@class PBCodable;
@protocol NSCopying;


#import "_ICLLAutoPlaySource.h"
#import "_ICLLAvailability.h"
#import "_ICLLNoGenerationSource.h"
#import "_ICLLRadioSource.h"

@interface _ICLLPlaybackControlSettings : PBCodable <NSCopying>

 {
    _ICLLAutoPlaySource *_autoPlay;
    _ICLLAvailability *_availability;
    _ICLLNoGenerationSource *_noGeneration;
    _ICLLRadioSource *_radio;
    int _repeatMode;
    int _shuffleMode;
    int _trackGenerationSource;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif