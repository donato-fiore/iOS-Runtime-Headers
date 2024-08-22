// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUDEFERREDUIBUTTON_H
#define SUDEFERREDUIBUTTON_H

@class UIButton, NSMutableDictionary, NSString;
@protocol SUDeferredUIView;



@interface SUDeferredUIButton : UIButton <SUDeferredUIView>

 {
    BOOL _deferredEnabled;
    CGRect _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    BOOL _isDeferringInterfaceUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEnabled;
-(id)imageForState:(NSUInteger)arg0 ;
-(id)titleForState:(NSUInteger)arg0 ;
-(struct CGRect )frame;
-(void)_commitDeferredInterfaceUpdates;
-(void)_saveCurrentStateAsDeferred;
-(void)_saveImagesAsDeferred;
-(void)_saveTitlesAsDeferred;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif