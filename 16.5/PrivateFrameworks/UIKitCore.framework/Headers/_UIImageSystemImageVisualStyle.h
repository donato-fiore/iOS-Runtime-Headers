// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGESYSTEMIMAGEVISUALSTYLE_H
#define _UIIMAGESYSTEMIMAGEVISUALSTYLE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIImageSystemImageVisualStyle : NSObject {
    UIImage *_closeImage;
    UIImage *_cameraImage;
    UIImage *_actionsImage;
    UIImage *_checkmarkImage;
    UIImage *_strokedCheckmarkImage;
    NSCache *__systemImageCache;
}




-(id)init;
-(void)_contentSizeCategoryChanged;


@end


#endif