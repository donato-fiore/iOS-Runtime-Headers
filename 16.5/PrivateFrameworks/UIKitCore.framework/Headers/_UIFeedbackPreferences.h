// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFEEDBACKPREFERENCES_H
#define _UIFEEDBACKPREFERENCES_H

@class NSMutableDictionary, NSDictionary, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface _UIFeedbackPreferences : NSObject {
    NSMutableDictionary *_enabledFeedbackTypes;
}


@property (readonly, nonatomic) NSDictionary *defaultFeedbackTypes; // ivar: _defaultFeedbackTypes
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedPreferences;
-(NSUInteger)_defaultFeedbackTypesForCategory:(id)arg0 ;
-(NSUInteger)_enabledFeedbackTypesForCategory:(id)arg0 ;
-(NSUInteger)enabledFeedbackTypesForCategory:(id)arg0 ;
-(id)_categoryForNullableCategory:(id)arg0 ;
-(id)_categoryKeyForCategory:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_defaultKeyForCategoryKey:(id)arg0 type:(NSUInteger)arg1 ;
-(id)init;
-(void)_accessibilityForceTouchChanged:(id)arg0 ;
-(void)_invalidate;
-(void)_setEnabledFeedbackTypes:(NSUInteger)arg0 forCategory:(id)arg1 ;
-(void)_setEnabledFeedbackTypes:(NSUInteger)arg0 forCategory:(id)arg1 postNotification:(BOOL)arg2 ;
-(void)_startObservingDefaults;
-(void)_updateEnabledFeedbackTypes:(*NSUInteger)arg0 forKey:(id)arg1 type:(NSUInteger)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif