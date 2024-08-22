// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROACTIVELIBRARYCATEGORYMAPPROVIDERSOURCE_H
#define SBPROACTIVELIBRARYCATEGORYMAPPROVIDERSOURCE_H

@class ATXAppDirectoryClient, NSArray, NSString;
@protocol SBHLibraryCategoryMapProviderSource, SBHLibraryCategoryMapProviderSourceDelegate;

#import <Foundation/Foundation.h>


@interface SBProactiveLibraryCategoryMapProviderSource : NSObject <SBHLibraryCategoryMapProviderSource>

 {
    ATXAppDirectoryClient *_appDirectoryClient;
    NSArray *_lastKnownGoodSuggestions;
    NSArray *_lastKnownGoodRecentApps;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHLibraryCategoryMapProviderSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sourceName;
@property (readonly) Class superclass;


-(id)init;
-(void)handleUpdateCategoriesNotification:(id)arg0 ;
-(void)requestLibraryCategoryMapWithOptions:(NSUInteger)arg0 existingLibraryCategoryMap:(id)arg1 forbiddenApplicationIdentifiers:(id)arg2 sessionId:(NSUInteger)arg3 queue:(id)arg4 completion:(id)arg5 ;


@end


#endif