// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPROPERTIESICONVIEW_H
#define _UIDOCUMENTPROPERTIESICONVIEW_H

@class LPLinkView, NSLayoutConstraint, LPLinkMetadata;


#import "UIView.h"
#import "UIDocumentProperties.h"

@interface _UIDocumentPropertiesIconView : UIView {
    UIDocumentProperties *_properties;
    LPLinkView *_linkView;
    NSLayoutConstraint *_centerXInsetConstraint;
    NSLayoutConstraint *_trailingInsetConstraint;
    NSLayoutConstraint *_centerYInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
}


@property (nonatomic) NSDirectionalEdgeInsets iconInsets; // ivar: _iconInsets
@property (retain, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata


-(id)_preferredPresentationSourceItem;
-(id)_preferredSender;
-(id)initWithMetadata:(id)arg0 ;
-(id)initWithProperties:(id)arg0 metadata:(id)arg1 ;
-(void)_fireTapAction:(id)arg0 ;
-(void)_updateImage;


@end


#endif