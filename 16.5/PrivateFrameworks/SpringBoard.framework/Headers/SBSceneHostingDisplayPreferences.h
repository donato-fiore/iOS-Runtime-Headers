// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENEHOSTINGDISPLAYPREFERENCES_H
#define SBSCENEHOSTINGDISPLAYPREFERENCES_H

@class CADisplayModeCriteria, FBSDisplayConfigurationRequest;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBSceneHostingDisplayPreferences : NSObject <NSCopying>



@property (readonly, nonatomic) CADisplayModeCriteria *CADisplayModeCriteria; // ivar: _CADisplayModeCriteria
@property (readonly, nonatomic) CGFloat contentsScale; // ivar: _contentsScale
@property (readonly, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest; // ivar: _displayConfigurationRequest
@property (readonly, nonatomic) BOOL keepOtherModes; // ivar: _keepOtherModes
@property (readonly, nonatomic) CGSize logicalScale; // ivar: _logicalScale


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDisplayConfigurationRequest:(id)arg0 logicalScale:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 keepOtherModes:(BOOL)arg3 ;


@end


#endif