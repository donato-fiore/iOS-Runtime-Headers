// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRSKIPCOMMANDRESOLUTIONRESULT_H
#define TVRSKIPCOMMANDRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface TVRSkipCommandResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithSkipCommandToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedSkipCommand:(NSInteger)arg0 ;


@end


#endif