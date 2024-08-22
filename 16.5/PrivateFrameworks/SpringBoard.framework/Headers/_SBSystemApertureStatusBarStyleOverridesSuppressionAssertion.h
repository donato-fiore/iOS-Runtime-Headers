// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSYSTEMAPERTURESTATUSBARSTYLEOVERRIDESSUPPRESSIONASSERTION_H
#define _SBSYSTEMAPERTURESTATUSBARSTYLEOVERRIDESSUPPRESSIONASSERTION_H

@class BSSimpleAssertion;



@interface _SBSystemApertureStatusBarStyleOverridesSuppressionAssertion : BSSimpleAssertion

@property (readonly, nonatomic) NSUInteger styleOverridesToSuppress; // ivar: _styleOverridesToSuppress


-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 styleOverridesToSuppress:(NSUInteger)arg2 invalidationBlock:(id)arg3 ;


@end


#endif