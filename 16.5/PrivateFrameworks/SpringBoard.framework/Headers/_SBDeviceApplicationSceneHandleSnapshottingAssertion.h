// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDEVICEAPPLICATIONSCENEHANDLESNAPSHOTTINGASSERTION_H
#define _SBDEVICEAPPLICATIONSCENEHANDLESNAPSHOTTINGASSERTION_H

@class BSSimpleAssertion;



@interface _SBDeviceApplicationSceneHandleSnapshottingAssertion : BSSimpleAssertion

@property (readonly, nonatomic) unsigned int contextId; // ivar: _contextId
@property (readonly, nonatomic) NSUInteger renderId; // ivar: _renderId


-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 contextId:(unsigned int)arg2 renderId:(NSUInteger)arg3 invalidationBlock:(id)arg4 ;


@end


#endif