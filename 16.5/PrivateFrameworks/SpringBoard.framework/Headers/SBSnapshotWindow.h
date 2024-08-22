// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSNAPSHOTWINDOW_H
#define SBSNAPSHOTWINDOW_H

@class UIWindow;



@interface SBSnapshotWindow : UIWindow {
    NSInteger _orientation;
}




+(BOOL)_isSecure;
-(NSInteger)interfaceOrientation;
-(id)initWithWindowScene:(id)arg0 frame:(struct CGRect )arg1 orientation:(NSInteger)arg2 ;


@end


#endif