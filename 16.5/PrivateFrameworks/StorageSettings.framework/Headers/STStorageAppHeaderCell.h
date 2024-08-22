// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGEAPPHEADERCELL_H
#define STSTORAGEAPPHEADERCELL_H

@class PSTableCell, NSMutableArray, UILabel, UIImageView, UIImage, NSString;



@interface STStorageAppHeaderCell : PSTableCell {
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_vendorLabel;
    UIImageView *_appIconView;
    UIImageView *_cloudIconView;
    BOOL _isDemoted;
    BOOL _infoHidden;
}


@property (retain) UIImage *icon;
@property (retain) NSString *info;
@property BOOL infoHidden;
@property (retain) NSString *title;
@property (retain) NSString *vendor;


+(id)specifierForAppBundleURL:(id)arg0 ;
+(id)specifierForAppIdentifier:(id)arg0 ;
+(id)specifierForAppProxy:(id)arg0 ;
+(id)specifierForStorageApp:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif