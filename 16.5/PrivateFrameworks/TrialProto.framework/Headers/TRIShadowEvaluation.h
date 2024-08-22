// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISHADOWEVALUATION_H
#define TRISHADOWEVALUATION_H



#import "TRIPBMessage.h"
#import "TRIClientBackgroundMLTask.h"
#import "TRIMLRuntimeEvaluation.h"

@interface TRIShadowEvaluation : TRIPBMessage

@property (retain, nonatomic) TRIClientBackgroundMLTask *clientBackgroundMlTask;
@property (nonatomic) BOOL hasClientBackgroundMlTask;
@property (retain, nonatomic) TRIMLRuntimeEvaluation *mlRuntime;
@property (readonly, nonatomic) int typeOneOfCase;


+(id)descriptor;


@end


#endif