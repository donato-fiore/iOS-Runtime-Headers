// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFACTORLEVEL_H
#define TRIFACTORLEVEL_H



#import "TRIPBMessage.h"
#import "TRIFactor.h"
#import "TRILevel.h"

@interface TRIFactorLevel : TRIPBMessage

@property (retain, nonatomic) TRIFactor *factor;
@property (nonatomic) BOOL hasFactor;
@property (nonatomic) BOOL hasLevel;
@property (retain, nonatomic) TRILevel *level;


+(id)descriptor;
+(id)hashForFactorLevels:(id)arg0 ;
-(id)uniqueDataRepresentation;


@end


#endif