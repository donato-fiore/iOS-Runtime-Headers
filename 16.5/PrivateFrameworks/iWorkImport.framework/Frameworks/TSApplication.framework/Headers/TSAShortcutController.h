// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSASHORTCUTCONTROLLER_H
#define TSASHORTCUTCONTROLLER_H

@class TSPObject, NSMutableDictionary, TSURetainedPointerKeyDictionary;


#import "TSADocumentRoot.h"

@interface TSAShortcutController : TSPObject {
    NSMutableDictionary *_shortcutToStyleDictionary;
    TSURetainedPointerKeyDictionary *_styleToShortcutDictionary;
}


@property (weak, nonatomic) TSADocumentRoot *documentRoot; // ivar: _documentRoot
@property (readonly, nonatomic) BOOL hasShortcuts;


+(id)localizedStringForShortcut:(id)arg0 ;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)shortcutForStyle:(id)arg0 ;
-(id)styleForShortcut:(id)arg0 ;
-(void)dealloc;
-(void)documentDidLoad;
-(void)documentWillUnload;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeStylesNotInTheme;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setStyle:(id)arg0 forShortcut:(id)arg1 ;


@end


#endif