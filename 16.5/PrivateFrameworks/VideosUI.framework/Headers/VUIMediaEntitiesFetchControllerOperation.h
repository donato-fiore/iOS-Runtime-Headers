// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAENTITIESFETCHCONTROLLEROPERATION_H
#define VUIMEDIAENTITIESFETCHCONTROLLEROPERATION_H

@class VUIAsynchronousOperation, NSArray, NSOperation, NSError;


#import "VUIMediaLibrary.h"
#import "VUIMediaEntitiesFetchControllerResult.h"

@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSArray *currentFetchResponses; // ivar: _currentFetchResponses
@property (retain, nonatomic) NSOperation *currentSubOperation; // ivar: _currentSubOperation
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger fetchReason; // ivar: _fetchReason
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (copy, nonatomic) NSArray *requests; // ivar: _requests
@property (retain, nonatomic) VUIMediaEntitiesFetchControllerResult *result; // ivar: _result


-(id)_resultWithResponses:(id)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 fetchReason:(NSInteger)arg1 requests:(id)arg2 ;
-(void)_handleCompletdFetchWithResponses:(id)arg0 error:(id)arg1 ;
-(void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg0 currentFetchResponses:(id)arg1 ;
-(void)_startMediaLibraryFetchOperation;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif