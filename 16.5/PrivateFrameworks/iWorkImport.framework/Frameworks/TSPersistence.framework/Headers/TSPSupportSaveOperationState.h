// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPSUPPORTSAVEOPERATIONSTATE_H
#define TSPSUPPORTSAVEOPERATIONSTATE_H

@class NSURL, NSUUID, TSUSafeSaveAssistant;

#import <Foundation/Foundation.h>


@interface TSPSupportSaveOperationState : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL didWriteSupportBundleSuccessfuly; // ivar: _didWriteSupportBundleSuccessfuly
@property (copy, nonatomic) NSUUID *documentUUID; // ivar: _documentUUID
@property (readonly, nonatomic) BOOL isSameDocumentUpdate;
@property (readonly, nonatomic) BOOL isSavingCurrentDocument;
@property (readonly, nonatomic) NSUUID *originalDocumentUUID; // ivar: _originalDocumentUUID
@property (copy, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (readonly, nonatomic) NSUUID *originalVersionUUID; // ivar: _originalVersionUUID
@property (retain, nonatomic) TSUSafeSaveAssistant *safeSaveAssistant; // ivar: _safeSaveAssistant
@property (nonatomic) BOOL shouldLeavePendingEndSave; // ivar: _shouldLeavePendingEndSave
@property (readonly, nonatomic) BOOL shouldUpdate;
@property (readonly, nonatomic) NSInteger updateType; // ivar: _updateType


-(id)init;
-(id)initWithOriginalDocumentUUID:(id)arg0 originalVersionUUID:(id)arg1 originalURL:(id)arg2 updateType:(NSInteger)arg3 ;


@end


#endif