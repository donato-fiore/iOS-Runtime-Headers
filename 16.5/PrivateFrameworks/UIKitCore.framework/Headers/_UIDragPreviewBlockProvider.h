// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDRAGPREVIEWBLOCKPROVIDER_H
#define _UIDRAGPREVIEWBLOCKPROVIDER_H

@class NSString;
@protocol _UIDragPreviewProvider;

#import <Foundation/Foundation.h>

#import "_UIDraggingImageComponent.h"
#import "UIDragPreview.h"

@interface _UIDragPreviewBlockProvider : NSObject <_UIDragPreviewProvider>

 {
    id *_previewProviderBlock;
    _UIDraggingImageComponent *_imageComponent;
}


@property (readonly, nonatomic) NSObject<_UIDragPreviewProvider> *_dragPreviewProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIDragPreview *preview; // ivar: _preview
@property (readonly) Class superclass;


+(id)previewProviderWithBlock:(id)arg0 ;
-(id)_createImageComponent;
-(id)_duiPreview;
-(id)imageComponent;


@end


#endif