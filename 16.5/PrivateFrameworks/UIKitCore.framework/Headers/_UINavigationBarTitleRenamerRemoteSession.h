// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTITLERENAMERREMOTESESSION_H
#define _UINAVIGATIONBARTITLERENAMERREMOTESESSION_H

@class UINavigationBarTitleRenamerSession, NSString, NSURL;
@protocol _UIOverlayServiceDelegate, _UIOServiceConnectionObserver, NSSecureCoding;


#import "_UIOServiceConnection.h"
#import "_UIOverlayService.h"

@interface _UINavigationBarTitleRenamerRemoteSession : UINavigationBarTitleRenamerSession <_UIOverlayServiceDelegate, _UIOServiceConnectionObserver, NSSecureCoding>

 {
    NSUInteger _currentState;
}


@property (retain, nonatomic) _UIOServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIOverlayService *overlayService; // ivar: _overlayService
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_client_textFieldShouldEndEditingWithText:(id)arg0 ;
-(BOOL)_isServerSide;
-(BOOL)_server_textFieldShouldEndEditingWithText:(id)arg0 ;
-(BOOL)_textFieldShouldEndEditingWithText:(id)arg0 ;
-(id)_client_willBeginRenamingWithText:(id)arg0 selectedRange:(struct _NSRange *)arg1 ;
-(id)_server_willBeginRenamingWithText:(id)arg0 selectedRange:(struct _NSRange *)arg1 ;
-(id)_willBeginRenamingWithText:(id)arg0 selectedRange:(struct _NSRange *)arg1 ;
-(id)createRenamerContentView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 iconMetadata:(id)arg1 ;
-(id)initWithSuggestedTitle:(id)arg0 iconMetadata:(id)arg1 ;
-(void)_client_cancelSessionAndNotify:(BOOL)arg0 ;
-(void)_client_sessionDidEnd;
-(void)_client_sessionDidStartInRenamer:(id)arg0 ;
-(void)_client_textFieldDidEndEditingWithText:(id)arg0 ;
-(void)_server_cancelSessionAndNotify:(BOOL)arg0 ;
-(void)_server_sessionDidEnd;
-(void)_server_sessionDidStartInRenamer:(id)arg0 ;
-(void)_server_textFieldDidEndEditingWithText:(id)arg0 ;
-(void)_textFieldDidEndEditingWithText:(id)arg0 ;
-(void)_updateSessionWithAction:(NSInteger)arg0 ;
-(void)cancelSession;
-(void)cancelSessionAndNotify:(BOOL)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)overlayServiceDidInvalidate:(id)arg0 ;
-(void)serviceConnectionDidInvalidate:(id)arg0 ;
-(void)sessionDidEnd;
-(void)sessionDidStartInRenamer:(id)arg0 ;


@end


#endif