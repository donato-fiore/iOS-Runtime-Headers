// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUILAYOUTMODEPREFERENCE_H
#define SAUILAYOUTMODEPREFERENCE_H

@class NSString;
@protocol SAUILayoutModePreferring;

#import <Foundation/Foundation.h>


@interface SAUILayoutModePreference : NSObject <SAUILayoutModePreferring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger layoutModeChangeReason; // ivar: _layoutModeChangeReason
@property (readonly, nonatomic) NSInteger preferredLayoutMode; // ivar: _preferredLayoutMode
@property (readonly) Class superclass;


-(id)initWithPreferredLayoutMode:(NSInteger)arg0 reason:(NSInteger)arg1 ;


@end


#endif