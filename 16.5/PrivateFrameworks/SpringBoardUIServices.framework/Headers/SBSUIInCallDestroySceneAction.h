// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUIINCALLDESTROYSCENEACTION_H
#define SBSUIINCALLDESTROYSCENEACTION_H

@class BSAction, NSString;



@interface SBSUIInCallDestroySceneAction : BSAction

@property (readonly, copy, nonatomic) NSString *analyticsSource;
@property (readonly, nonatomic) NSInteger destructionReason;


-(id)initWithDestructionReason:(NSInteger)arg0 analyticsSource:(id)arg1 timeout:(CGFloat)arg2 withResponseHandler:(id)arg3 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif