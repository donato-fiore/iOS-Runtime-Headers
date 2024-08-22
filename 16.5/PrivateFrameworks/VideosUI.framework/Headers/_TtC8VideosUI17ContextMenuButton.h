// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI17CONTEXTMENUBUTTON_H
#define _TTC8VIDEOSUI17CONTEXTMENUBUTTON_H



#import "VUIButton.h"

@interface _TtC8VideosUI17ContextMenuButton : VUIButton {
    ? lockupViewModel;
    ? contextMenuInteractor;
}




-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithType:(NSUInteger)arg0 interfaceStyle:(NSUInteger)arg1 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;


@end


#endif