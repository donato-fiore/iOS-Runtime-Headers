// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDOCUMENTPROPERTIES_H
#define UIDOCUMENTPROPERTIES_H

@class LPMetadataProvider, LPLinkMetadata, NSURL;

#import <Foundation/Foundation.h>

#import "UINavigationItem.h"
#import "_UIDocumentPropertiesHeaderView.h"
#import "UIAction.h"
#import "_UIDocumentPropertiesIconView.h"

@interface UIDocumentProperties : NSObject

@property (weak, nonatomic, setter=_setAssociatedNavigationItem:) UINavigationItem *_associatedNavigationItem; // ivar: _associatedNavigationItem
@property (retain, nonatomic, setter=_setMetadataProvider:) LPMetadataProvider *_metadataProvider; // ivar: __metadataProvider
@property (copy, nonatomic, setter=_setWantsIconRepresentationChangedHandler:) id *_wantsIconRepresentationChangedHandler; // ivar: __wantsIconRepresentationChangedHandler
@property (copy, nonatomic) id *activityViewControllerProvider; // ivar: _activityViewControllerProvider
@property (copy, nonatomic) id *dragItemsProvider; // ivar: _dragItemsProvider
@property (weak, nonatomic) _UIDocumentPropertiesHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIAction *iconRepresentationAction; // ivar: _iconRepresentationAction
@property (weak, nonatomic) _UIDocumentPropertiesIconView *iconView; // ivar: _iconView
@property (copy, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL wantsIconRepresentation; // ivar: _wantsIconRepresentation


-(id)_existingMetadata;
-(id)_headerViewForMenuInteraction:(id)arg0 sourceViewProvider:(id)arg1 ;
-(id)_placeholderMetadata;
-(id)initWithMetadata:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_didLoadMetadata:(id)arg0 ;
-(void)_fetchMetadataIfNecessary;
-(void)_performBlockAndCallIconRepresentationChangedHandlerIfNecessary:(id)arg0 ;
-(void)_updateMetadataInUse;


@end


#endif