// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARDATANETWORKENTRY_H
#define _UISTATUSBARDATANETWORKENTRY_H

@class UIStatusBarDataIntegerEntry;



@interface _UIStatusBarDataNetworkEntry : UIStatusBarDataIntegerEntry

@property (nonatomic) BOOL lowDataModeActive; // ivar: _lowDataModeActive
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif