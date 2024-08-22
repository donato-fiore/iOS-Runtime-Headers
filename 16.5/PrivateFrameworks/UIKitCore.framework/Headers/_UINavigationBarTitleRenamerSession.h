// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTITLERENAMERSESSION_H
#define _UINAVIGATIONBARTITLERENAMERSESSION_H

@class LPLinkMetadata, UIView<_UINavigationBarTitleRenamerContentView>, NSUUID, NSString;

#import <Foundation/Foundation.h>

#import "_UINavigationBarTitleRenamer.h"

@interface _UINavigationBarTitleRenamerSession : NSObject

@property (readonly, weak, nonatomic) _UINavigationBarTitleRenamer *attachedRenamer; // ivar: _attachedRenamer
@property (weak, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) LPLinkMetadata *iconMetadata; // ivar: _iconMetadata
@property (readonly, nonatomic) UIView<_UINavigationBarTitleRenamerContentView> *renamerContentView; // ivar: _renamerContentView
@property (readonly, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)_textFieldShouldEndEditingWithText:(id)arg0 ;
-(id)_sanitizedTitleForText:(id)arg0 ;
-(id)_willBeginRenamingWithText:(id)arg0 selectedRange:(struct _NSRange *)arg1 ;
-(id)createRenamerContentView;
-(id)existingRenamerContentView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestedTitle:(id)arg0 ;
-(id)initWithSuggestedTitle:(id)arg0 iconMetadata:(id)arg1 ;
-(void)_textFieldDidEndEditingWithText:(id)arg0 ;
-(void)cancelSession;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sessionDidEnd;
-(void)sessionDidStartInRenamer:(id)arg0 ;


@end


#endif