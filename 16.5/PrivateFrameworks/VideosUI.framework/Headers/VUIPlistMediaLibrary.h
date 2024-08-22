// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLISTMEDIALIBRARY_H
#define VUIPLISTMEDIALIBRARY_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;


#import "VUIDeviceMediaLibrary.h"
#import "VUIPlistMediaDatabase.h"

@interface VUIPlistMediaLibrary : VUIDeviceMediaLibrary

@property (retain, nonatomic) VUIPlistMediaDatabase *database; // ivar: _database
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue; // ivar: _serialOperationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue


-(id)_imageLoadOperationWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg0 ;
-(id)_imageLoaderIdentifier;
-(id)enqueueFetchRequests:(id)arg0 completionHandler:(id)arg1 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 manager:(id)arg2 ;
-(id)initWithURL:(id)arg0 manager:(id)arg1 ;
-(id)saveMediaEntity:(id)arg0 completionHandler:(id)arg1 ;
-(id)title;
-(void)_enqueueProcessingBlock:(id)arg0 ;
-(void)_handleMediaDatabaseContentsDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif