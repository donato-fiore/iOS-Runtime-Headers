// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIREMOVEFROMPLAYHISTORYREQUESTMANAGER_H
#define VUIREMOVEFROMPLAYHISTORYREQUESTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUIRemoveFromPlayHistoryRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingDeleteIDOperationDictionary; // ivar: _ongoingDeleteIDOperationDictionary


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)sendRequestForDeleteID:(id)arg0 isContinueWatching:(BOOL)arg1 ;


@end


#endif