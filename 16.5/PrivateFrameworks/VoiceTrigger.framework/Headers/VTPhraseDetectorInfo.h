// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTPHRASEDETECTORINFO_H
#define VTPHRASEDETECTORINFO_H


#import <Foundation/Foundation.h>

#import "VTPhraseConfig.h"

@interface VTPhraseDetectorInfo : NSObject

@property (nonatomic) float effectiveKeywordThreshold; // ivar: _effectiveKeywordThreshold
@property (nonatomic) BOOL hasPendingNearMiss; // ivar: _hasPendingNearMiss
@property (retain, nonatomic) VTPhraseConfig *phraseConfig; // ivar: _phraseConfig


-(id)initWithPhraseConfig:(id)arg0 ;


@end


#endif