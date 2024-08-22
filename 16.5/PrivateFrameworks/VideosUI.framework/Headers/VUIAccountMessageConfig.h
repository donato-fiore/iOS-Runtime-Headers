// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIACCOUNTMESSAGECONFIG_H
#define VUIACCOUNTMESSAGECONFIG_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIAccountMessageConfig : NSObject

@property (nonatomic) BOOL alwaysForceOpenSidebarAnimated; // ivar: _alwaysForceOpenSidebarAnimated
@property (nonatomic) BOOL alwaysForceOpenSidebarNonAnimated; // ivar: _alwaysForceOpenSidebarNonAnimated
@property (nonatomic) NSInteger fallbackVisibilityType; // ivar: _fallbackVisibilityType
@property (retain, nonatomic) NSDictionary *visibilityBehaviours; // ivar: _visibilityBehaviours


-(NSInteger)_getFallbackVisibilityType;
-(id)_createVisibilityDictionary;
-(id)init;


@end


#endif