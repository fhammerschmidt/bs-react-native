[@react.component] [@bs.module "react-native"]
external make:
  (
    ~accessible: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]
                          =?,
    ~accessibilityStates: array(Types.AccessibilityState.t)=?,
    ~delayLongPress: int=?,
    ~delayPressIn: int=?,
    ~delayPressOut: int=?,
    ~disabled: bool=?,
    ~hitSlop: Types.insets=?,
    ~onLayout: Event.NativeLayoutEvent.t => unit=?,
    ~onLongPress: Event.NativePressEvent.t => unit=?,
    ~onPress: Event.NativePressEvent.t => unit=?,
    ~onPressIn: Event.NativePressEvent.t => unit=?,
    ~onPressOut: Event.NativePressEvent.t => unit=?,
    ~pressRetentionOffset: Types.insets=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "TouchableWithoutFeedback";
