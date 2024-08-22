// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTSEGMENTEDCONTROLITEM_H
#define SUSCRIPTSEGMENTEDCONTROLITEM_H

@class NSString, UIImage;


#import "SUScriptObject.h"
#import "SUScriptCanvasContext.h"

@interface SUScriptSegmentedControlItem : SUScriptObject {
    SUScriptCanvasContext *_canvas;
    NSString *_identifier;
    NSString *_imageURLString;
    NSString *_title;
    id *_userInfo;
}


@property (retain) SUScriptCanvasContext *canvas;
@property (retain) NSString *identifier;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain) NSString *imageURL;
@property (retain) NSString *title;
@property (retain) id *userInfo;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_segmentedControl;
-(id)attributeKeys;
-(id)initWithPageSection:(id)arg0 ;
-(id)newPageSection;
-(id)scriptAttributeKeys;
-(void)_reloadUserInterface;
-(void)dealloc;


@end


#endif