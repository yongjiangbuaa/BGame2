<GameProjectFile>
  <PropertyGroup Type="Node" Name="Clock" ID="8dfc407e-f8a2-4266-be50-c6ae0ab6fb20" Version="2.3.2.3" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="180" Speed="1.0000">
        <Timeline ActionTag="-1926659058" Property="Position">
          <PointFrame FrameIndex="0" X="-317.0000" Y="108.0000">
            <EasingData Type="0" />
          </PointFrame>
          <PointFrame FrameIndex="60" X="-317.0000" Y="108.0000">
            <EasingData Type="0" />
          </PointFrame>
          <PointFrame FrameIndex="120" X="-317.0000" Y="108.0000">
            <EasingData Type="0" />
          </PointFrame>
          <PointFrame FrameIndex="180" X="-2.0000" Y="7.0000">
            <EasingData Type="0" />
          </PointFrame>
        </Timeline>
        <Timeline ActionTag="-1926659058" Property="Scale">
          <ScaleFrame FrameIndex="0" X="1.0000" Y="1.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="60" X="1.0000" Y="1.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="120" X="1.0000" Y="1.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="180" X="1.0000" Y="1.0000">
            <EasingData Type="0" />
          </ScaleFrame>
        </Timeline>
        <Timeline ActionTag="-1926659058" Property="RotationSkew">
          <ScaleFrame FrameIndex="0" X="0.0000" Y="0.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="60" X="6.0000" Y="6.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="120" X="12.0000" Y="12.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="180" X="18.0002" Y="17.9999">
            <EasingData Type="0" />
          </ScaleFrame>
        </Timeline>
        <Timeline ActionTag="-697873106" Property="Position">
          <PointFrame FrameIndex="0" X="-319.0000" Y="107.0000">
            <EasingData Type="0" />
          </PointFrame>
        </Timeline>
        <Timeline ActionTag="-697873106" Property="Scale">
          <ScaleFrame FrameIndex="0" X="1.0000" Y="1.0000">
            <EasingData Type="0" />
          </ScaleFrame>
        </Timeline>
        <Timeline ActionTag="-697873106" Property="RotationSkew">
          <ScaleFrame FrameIndex="0" X="0.0000" Y="0.0000">
            <EasingData Type="0" />
          </ScaleFrame>
        </Timeline>
      </Animation>
      <ObjectData Name="Node" Tag="2" ctype="GameNodeObjectData">
        <Size X="0.0000" Y="0.0000" />
        <Children>
          <AbstractNodeData Name="Sprite_clock" ActionTag="1585101565" Tag="3" IconVisible="False" LeftMargin="-62.0000" RightMargin="-58.0000" TopMargin="-90.5000" BottomMargin="-50.5000" ctype="SpriteObjectData">
            <Size X="120.0000" Y="141.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="-2.0000" Y="20.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="clock.png" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="Sprite_m" ActionTag="-1144283359" Tag="4" IconVisible="False" LeftMargin="-9.0000" RightMargin="-23.0000" TopMargin="-23.0000" BottomMargin="1.0000" ctype="SpriteObjectData">
            <Size X="32.0000" Y="22.0000" />
            <AnchorPoint ScaleX="0.2188" ScaleY="0.2727" />
            <Position X="-2.0000" Y="7.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="m.png" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="Sprite_h" ActionTag="-1926659058" Tag="6" RotationSkewX="18.0002" RotationSkewY="17.9999" IconVisible="False" LeftMargin="-23.5000" RightMargin="-3.5000" TopMargin="-22.5000" BottomMargin="1.5000" ctype="SpriteObjectData">
            <Size X="27.0000" Y="21.0000" />
            <AnchorPoint ScaleX="0.7963" ScaleY="0.2619" />
            <Position X="-2.0000" Y="7.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="h.png" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="Sprite_s" ActionTag="-697873106" Tag="7" IconVisible="False" LeftMargin="-32.5000" RightMargin="-8.5000" TopMargin="-11.0000" BottomMargin="3.0000" ctype="SpriteObjectData">
            <Size X="41.0000" Y="8.0000" />
            <AnchorPoint ScaleX="0.6951" ScaleY="0.3750" />
            <Position X="-4.0000" Y="6.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="s.png" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>