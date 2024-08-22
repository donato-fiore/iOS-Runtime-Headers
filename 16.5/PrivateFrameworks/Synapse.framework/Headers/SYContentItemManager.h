// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYCONTENTITEMMANAGER_H
#define SYCONTENTITEMMANAGER_H


#import <Foundation/Foundation.h>


@interface SYContentItemManager : NSObject



+(id)sharedManager;
-(void)_navigateToURL:(id)arg0 completion:(id)arg1 ;
-(void)_navigateToUserActivity:(id)arg0 completion:(id)arg1 ;
-(void)fetchLinkableContentItemsWithCompletion:(id)arg0 ;
-(void)navigateToContentItem:(id)arg0 completion:(id)arg1 ;


@end


#endif