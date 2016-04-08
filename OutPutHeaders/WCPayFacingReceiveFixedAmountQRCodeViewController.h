/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"

@class WCPayFacingReceiveFixedMoneyQRCodeView;
@protocol WCPayFacingReceiveFixedAmountQRCodeViewControllerDelegate;

@interface WCPayFacingReceiveFixedAmountQRCodeViewController : WCPayBaseViewController {
	WCPayFacingReceiveFixedMoneyQRCodeView* m_oWCPayFacingReceiveFixedMoneyQRCodeView;
	id<WCPayFacingReceiveFixedAmountQRCodeViewControllerDelegate> m_delegate;
}
-(void).cxx_destruct;
-(void)onSaveQRCode;
-(void)setDelegate:(id)delegate;
-(void)refreshViewWithData:(id)data;
-(void)viewDidLoad;
-(void)reloadTableView;
-(void)initNavigationBar;
-(void)initHeaderView;
-(void)dealloc;
-(id)init;
@end
