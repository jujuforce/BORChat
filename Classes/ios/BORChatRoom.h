//
// Created by Bohdan on 3/22/14.
// Copyright (c) 2014 Bohdan Orlov. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BORChatMessage;
@class BORChatCollectionViewController;


@interface BORChatRoom : UIViewController

@property (strong, nonatomic, readonly) BORChatCollectionViewController *chatCollectionViewController;

@property (nonatomic, strong, readonly) UIView *messageContainer;
@property (nonatomic, strong, readonly) UITextView *messageTextView;
@property (nonatomic, strong, readonly) UIButton *messageSendButton;
@property (nonatomic, strong, readonly) UILabel *messagePlaceholder;

- (void)sendMessage;
- (void)addMessage:(id <BORChatMessage>)message scrollToMessage:(BOOL)scrollToMessage;
@end