/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ShareConfirmViewDelegate.h"
#import "MMObject.h"

@class NSDictionary, ShareConfirmView, NSData, CMessageWrap, NSString;
@protocol ShareMessageConfirmLogicHelperDelegate;

@interface ShareMessageConfirmLogicHelper : MMObject <ShareConfirmViewDelegate> {
	ShareConfirmView* _confirmView;
	CMessageWrap* _msgWrap;
	id<ShareMessageConfirmLogicHelperDelegate> _delegate;
	NSData* _imageData;
	NSString* _thumbImageUrl;
	unsigned long _scene;
	BOOL _isShowTextView;
	BOOL _isAddMessage;
	BOOL _isAddTextMessage;
	BOOL _isShowSendSuccessView;
	unsigned long _style;
	BOOL _hasBeenHidden;
	NSDictionary* _userData;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDictionary* userData;
@property(assign, nonatomic) BOOL isShowSendSuccessView;
@property(assign, nonatomic) BOOL isAddTextMessage;
@property(assign, nonatomic) BOOL isAddMessage;
@property(retain, nonatomic) NSString* thumbImageUrl;
@property(retain, nonatomic) NSData* imageData;
@property(retain, nonatomic) CMessageWrap* msgWrap;
@property(assign, nonatomic) __weak id<ShareMessageConfirmLogicHelperDelegate> delegate;
-(void).cxx_destruct;
-(void)OnStayAtWeChat:(id)weChat;
-(void)OnBackToApp:(id)app;
-(void)OnError:(id)error;
-(void)OnCancel:(id)cancel;
-(void)OnSend:(id)send;
-(void)shareAppMessage;
-(void)rotateToOrientaion:(int)orientaion;
-(void)rotateToCurrentOrietation;
-(void)hideConfirmView;
-(void)showConfirmView;
-(void)showConfirmViewWithInputText:(id)inputText;
-(void)setConfirmViewStyle:(int)style;
-(void)dealloc;
-(id)initWithMessageWrap:(id)messageWrap isShowTextView:(BOOL)view andAppScene:(unsigned long)scene;
@end
