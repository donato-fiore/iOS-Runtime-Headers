// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDIALOGLISTITEM_H
#define WFDIALOGLISTITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding, WFPropertyListObject;

#import <Foundation/Foundation.h>

#import "WFImage.h"

@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL hasAltText; // ivar: _hasAltText
@property (readonly, nonatomic) BOOL hasImage; // ivar: _hasImage
@property (readonly, nonatomic) BOOL hasSubtitle; // ivar: _hasSubtitle
@property (nonatomic) BOOL hideSubtitle; // ivar: _hideSubtitle
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) WFImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSObject<WFPropertyListObject> *serializedPossibleState; // ivar: _serializedPossibleState
@property (readonly, nonatomic) BOOL showingStaticContent; // ivar: _showingStaticContent
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 identifier:(id)arg2 image:(id)arg3 selected:(BOOL)arg4 hideSubtitle:(BOOL)arg5 serializedPossibleState:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif