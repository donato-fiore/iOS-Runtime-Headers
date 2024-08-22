// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSWIDGETCONTROLLER_H
#define TPSWIDGETCONTROLLER_H

@class NSMutableDictionary, NSOperationQueue;
@protocol TPSWidgetControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSDocument.h"

@interface TPSWidgetController : NSObject {
    TPSDocument *_preferredDocument;
}


@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap; // ivar: _assetURLSessionMap
@property (weak, nonatomic) NSObject<TPSWidgetControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) os_unfair_lock_s documentLock; // ivar: _documentLock
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) TPSDocument *preferredDocument;
@property (nonatomic) os_unfair_lock_s urlSessionLock; // ivar: _urlSessionLock


-(id)cacheFileURLForAssets:(id)arg0 language:(id)arg1 userInterfaceStyle:(NSInteger)arg2 assetFileInfoManager:(id)arg3 ;
-(id)init;
-(void)attemptWidgetUpdateWith:(id)arg0 ;
-(void)dealloc;
-(void)fetchAssetForAssets:(id)arg0 language:(id)arg1 userInterfaceStyle:(NSInteger)arg2 assetFileInfoManager:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchWidgetAssetsForDocument:(id)arg0 preferCacheIfAvailable:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateSessionMapValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateWidgetDocumentWithDocumentsMap:(id)arg0 documentsDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 preferHardwareWelcome:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)widgetAssetsForDocument:(id)arg0 preferCacheIfAvailable:(BOOL)arg1 userInterfaceStyle:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif