// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROCESSSETTINGS_H
#define SBPROCESSSETTINGS_H

@class BSMutableSettings, NSString;
@protocol BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding>

 {
    BSMutableSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)boolForProcessSetting:(NSInteger)arg0 ;
-(NSInteger)flagForProcessSetting:(NSInteger)arg0 ;
-(id)copyProcessSettings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)objectForProcessSetting:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)applyProcessSettings:(id)arg0 ;
-(void)clearProcessSettings;
-(void)dealloc;
-(void)setFlag:(NSInteger)arg0 forProcessSetting:(NSInteger)arg1 ;
-(void)setObject:(id)arg0 forProcessSetting:(NSInteger)arg1 ;


@end


#endif