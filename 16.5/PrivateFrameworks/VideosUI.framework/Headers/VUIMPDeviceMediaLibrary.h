// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPDEVICEMEDIALIBRARY_H
#define VUIMPDEVICEMEDIALIBRARY_H

@class NSMutableDictionary;


#import "VUIDeviceMediaLibrary.h"
#import "VUIMPMediaLibrary.h"

@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary

@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) NSMutableDictionary *rentalPlaybackStartDatesToSave; // ivar: _rentalPlaybackStartDatesToSave
@property (nonatomic) BOOL updatingRentalPlaybackStartDates; // ivar: _updatingRentalPlaybackStartDates


+(BOOL)_isInitialUpdateInProgress;
+(BOOL)_isUpdateInProgress;
-(BOOL)isInitialUpdateInProgress;
-(BOOL)isUpdating;
-(id)_imageLoadOperationWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg0 ;
-(id)_imageLoaderIdentifier;
-(id)enqueueFetchRequests:(id)arg0 completionHandler:(id)arg1 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 manager:(id)arg2 ;
-(id)initWithManager:(id)arg0 ;
-(id)saveMediaEntity:(id)arg0 completionHandler:(id)arg1 ;
-(id)title;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg0 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg0 ;
-(void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)updateFromCloudWithReason:(NSInteger)arg0 ;
-(void)updateProgressWithCompletionHandler:(id)arg0 ;


@end


#endif