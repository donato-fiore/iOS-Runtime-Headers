// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPLIBRARYSHELVESDATASOURCE_H
#define VUIMPLIBRARYSHELVESDATASOURCE_H

@class NSString, NSMutableArray;
@protocol VUILibraryDataSourceDelegate;


#import "VUILibraryShelvesDataSource.h"
#import "VUIMediaLibrary.h"

@interface VUIMPLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *fetchedDataSources; // ivar: _fetchedDataSources
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (readonly) Class superclass;


-(id)_dataSourceForShelves;
-(id)initWithValidShelfTypes:(id)arg0 forMediaLibrary:(id)arg1 ;
-(void)_addRentalsUpdateNotificationObserver;
-(void)_removeRentalsUpdateNotificationObserver;
-(void)_updateRentalShelf;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)dealloc;
-(void)startFetch;


@end


#endif