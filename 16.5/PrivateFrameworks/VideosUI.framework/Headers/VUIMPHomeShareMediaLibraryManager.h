// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPHOMESHAREMEDIALIBRARYMANAGER_H
#define VUIMPHOMESHAREMEDIALIBRARYMANAGER_H

@class NSString, NSArray, NSMutableArray;
@protocol VUIHomeShareMediaLibraryManager, VUIHomeShareMediaLibraryManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VUIMediaLibraryManager.h"

@interface VUIMPHomeShareMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIHomeShareMediaLibraryManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property (weak, nonatomic) VUIMediaLibraryManager *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableArray *mutableHomeShareMediaLibraries; // ivar: _mutableHomeShareMediaLibraries
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property (readonly) Class superclass;


+(id)_sharedMPMediaLibraries;
-(id)initWithManager:(id)arg0 ;
-(void)_handleAvailableMediaLibrariesDidChange:(id)arg0 ;
-(void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)arg0 withChangeSet:(id)arg1 ;
-(void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)arg0 ;
-(void)beginDiscoveringMediaLibraries;
-(void)dealloc;
-(void)endDiscoveringMediaLibraries;


@end


#endif