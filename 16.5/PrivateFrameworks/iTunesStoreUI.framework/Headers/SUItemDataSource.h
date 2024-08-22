// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUITEMDATASOURCE_H
#define SUITEMDATASOURCE_H


#import <Foundation/Foundation.h>


@interface SUItemDataSource : NSObject



+(id)sharedDataSource;
+(void)setSharedDataSource:(id)arg0 ;
-(NSInteger)estimatedDiskSpaceNeededForItem:(id)arg0 storeOffer:(id)arg1 ;
-(NSInteger)itemTypeForItem:(id)arg0 ;
-(NSInteger)itemTypeForTypeString:(id)arg0 ;
-(id)_newDownloadForDocumentItem:(id)arg0 storeOffer:(id)arg1 ;
-(id)_newDownloadForPodcastEpisode:(id)arg0 storeOffer:(id)arg1 ;
-(id)_newDownloadMetadataForPodcastEpisode:(id)arg0 storeOffer:(id)arg1 ;
-(id)_newTonePurchaseWithPurchase:(id)arg0 ;
-(id)_thumbnailImageForItem:(id)arg0 ;
-(id)newDisplayItemValidationTestsForItem:(id)arg0 ;
-(id)newExternalDownloadWithItem:(id)arg0 storeOffer:(id)arg1 ;
-(id)newItemWithItemDictionary:(id)arg0 ;
-(id)newPurchaseWithItem:(id)arg0 storeOffer:(id)arg1 ;
-(id)typeStringForItemType:(NSInteger)arg0 ;


@end


#endif