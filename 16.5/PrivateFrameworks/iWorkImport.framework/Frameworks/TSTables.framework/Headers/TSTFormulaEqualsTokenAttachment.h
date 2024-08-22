// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTFORMULAEQUALSTOKENATTACHMENT_H
#define TSTFORMULAEQUALSTOKENATTACHMENT_H

@class TSWPUIGraphicalAttachment;



@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment



-(BOOL)wantsSelectionAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)baselineOffset;
-(id)description;
-(id)rendererForAttachment;
-(struct CGSize )size;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif