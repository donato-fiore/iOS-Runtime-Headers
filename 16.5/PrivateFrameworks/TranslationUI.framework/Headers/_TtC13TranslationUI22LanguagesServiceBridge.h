// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13TRANSLATIONUI22LANGUAGESSERVICEBRIDGE_H
#define _TTC13TRANSLATIONUI22LANGUAGESSERVICEBRIDGE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _TtC13TranslationUI22LanguagesServiceBridge : NSObject {
    ? service;
    ? subscriptions;
    ? models;
}


@property (nonatomic, copy) NSArray *models;


-(id)init;
-(id)modelForLocale:(id)arg0 ;
-(void)deleteLocale:(id)arg0 ;
-(void)downloadLocales:(id)arg0 ;


@end


#endif