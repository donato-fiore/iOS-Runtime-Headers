// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHOOSEFROMLISTDIALOGREQUEST_H
#define WFCHOOSEFROMLISTDIALOGREQUEST_H

@class NSXPCListenerEndpoint, NSString, NSArray, NSXPCConnection;
@protocol WFDialogListItemStore;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"
#import "WFListDisplayConfiguration.h"

@interface WFChooseFromListDialogRequest : WFDialogRequest

@property (readonly, nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, nonatomic) NSObject<WFDialogListItemStore> *dataStore;
@property (retain, nonatomic) NSXPCListenerEndpoint *dataStoreEndpoint; // ivar: _dataStoreEndpoint
@property (retain, nonatomic) WFListDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton
@property (readonly, copy, nonatomic) NSString *emptyStateMessage;
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 allowsMultipleSelection:(BOOL)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4 ;
-(id)requestByCompactingRequest;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif