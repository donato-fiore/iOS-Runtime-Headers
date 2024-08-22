// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGETIPINFOCELL_H
#define STSTORAGETIPINFOCELL_H

@class PSTableCell, NSMutableArray, UILabel;



@interface STStorageTipInfoCell : PSTableCell {
    NSMutableArray *_constraints;
    UILabel *_infoLabel;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif