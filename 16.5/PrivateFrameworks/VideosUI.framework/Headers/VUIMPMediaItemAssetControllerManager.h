// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPMEDIAITEMASSETCONTROLLERMANAGER_H
#define VUIMPMEDIAITEMASSETCONTROLLERMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIMPMediaItemAssetControllerManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue


+(id)defaultManager;
-(id)init;
-(id)mediaItemAssetControllerWithMediaItem:(id)arg0 mediaEntityIdentifier:(id)arg1 ;
-(id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)arg0 mediaEntityIdentifier:(id)arg1 ;
-(id)mediaItemDownloadControllerWithMediaItem:(id)arg0 ;


@end


#endif