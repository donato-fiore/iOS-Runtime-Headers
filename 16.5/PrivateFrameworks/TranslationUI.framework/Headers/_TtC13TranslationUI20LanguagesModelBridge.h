// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13TRANSLATIONUI20LANGUAGESMODELBRIDGE_H
#define _TTC13TRANSLATIONUI20LANGUAGESMODELBRIDGE_H

@class NSString, NSLocale, _LTLanguageInstallationStatus;

#import <Foundation/Foundation.h>


@interface _TtC13TranslationUI20LanguagesModelBridge : NSObject {
    ? id;
    ? locale;
    ? displayName;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) _LTLanguageInstallationStatus *status; // ivar: status


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif